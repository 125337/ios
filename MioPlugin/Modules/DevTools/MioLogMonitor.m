#import "MioLogMonitor.h"
#import "../../Config/PluginConfig.h"
#import "../../Core/LogManager.h"

#import <fcntl.h>
#import <unistd.h>

@interface MioLogMonitor ()

@property (nonatomic, strong) NSMutableArray<NSString *> *logEntries;
@property (nonatomic, strong) NSMutableString *lineBuffer;
@property (nonatomic, assign) int originalStderrFD;
@property (nonatomic, assign) int pipeReadFD;
@property (nonatomic, strong) dispatch_source_t readSource;
@property (nonatomic, assign) BOOL isInstalled;
@property (nonatomic, assign) BOOL isMonitoring;
@property (nonatomic, strong) dispatch_queue_t fileWriteQueue;
@property (nonatomic, copy) NSString *logFilePath;

@end

@implementation MioLogMonitor

+ (instancetype)sharedInstance {
    static MioLogMonitor *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[MioLogMonitor alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _logEntries = [NSMutableArray array];
        _lineBuffer = [NSMutableString string];
        _pipeReadFD = -1;
        _originalStderrFD = -1;
    }
    return self;
}

#pragma mark - Public

- (void)startMonitoring {
    if (self.isMonitoring) return;
    self.isMonitoring = YES;

    [self installStderrRedirect];

    WPLog(@"DevTools", @"[MioLogMonitor] ✓ 监控已启动");
}

- (void)stopMonitoring {
    self.isMonitoring = NO;
    WPLog(@"DevTools", @"[MioLogMonitor] ✗ 监控已停止");
}

- (BOOL)isRunning {
    return self.isMonitoring;
}

- (NSArray<NSString *> *)allLogs {
    @synchronized(self.logEntries) {
        return [self.logEntries copy];
    }
}

- (void)clearLogs {
    @synchronized(self.logEntries) {
        [self.logEntries removeAllObjects];
    }
}

- (NSString *)exportLogsAsString {
    @synchronized(self.logEntries) {
        return [self.logEntries componentsJoinedByString:@"\n"];
    }
}

- (NSArray<NSString *> *)filteredLogs {
    PluginConfig *config = [PluginConfig shared];
    if (config.nsLogKeywords.length == 0) {
        return [self allLogs];
    }

    NSArray<NSString *> *keywords =
        [config.nsLogKeywords componentsSeparatedByString:@","];
    NSMutableArray<NSString *> *result = [NSMutableArray array];

    @synchronized(self.logEntries) {
        for (NSString *entry in self.logEntries) {
            for (NSString *kw in keywords) {
                NSString *trimmedKW = [kw stringByTrimmingCharactersInSet:
                    [NSCharacterSet whitespaceAndNewlineCharacterSet]];
                if (trimmedKW.length > 0 && [entry containsString:trimmedKW]) {
                    [result addObject:entry];
                    break;
                }
            }
        }
    }
    return [result copy];
}

- (void)enableLocalSave:(BOOL)enabled {
    // 标记是否启用本地保存，由 appendLogEntry 检查
}

- (NSString *)currentLogFilePath {
    return self.logFilePath;
}

#pragma mark - STDERR Redirect

- (void)installStderrRedirect {
    if (self.isInstalled) return;
    @synchronized(self) {

        int pipefd[2];
        if (pipe(pipefd) < 0) return;

        self.originalStderrFD = dup(STDERR_FILENO);

        fcntl(pipefd[0], F_SETFD, FD_CLOEXEC);
        fcntl(self.originalStderrFD, F_SETFD, FD_CLOEXEC);

        dup2(pipefd[1], STDERR_FILENO);
        close(pipefd[1]);

        setvbuf(stderr, NULL, _IONBF, 0);

        self.pipeReadFD = pipefd[0];

        self.lineBuffer = [NSMutableString string];

        __weak typeof(self) weakSelf = self;
        self.readSource = dispatch_source_create(
            DISPATCH_SOURCE_TYPE_READ,
            (uintptr_t)pipefd[0],
            0,
            dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0)
        );

        dispatch_source_set_event_handler(self.readSource, ^{
            __strong typeof(weakSelf) strongSelf = weakSelf;
            if (!strongSelf) return;
            [strongSelf handlePipeData];
        });

        dispatch_source_set_cancel_handler(self.readSource, ^{
            __strong typeof(weakSelf) strongSelf = weakSelf;
            if (strongSelf && strongSelf.originalStderrFD >= 0) {
                dup2(strongSelf.originalStderrFD, STDERR_FILENO);
                close(strongSelf.originalStderrFD);
                strongSelf.originalStderrFD = -1;
            }
        });

        dispatch_resume(self.readSource);
        self.isInstalled = YES;
    }
}

- (void)handlePipeData {
    char buf[4096];
    ssize_t bytesRead = read(self.pipeReadFD, buf, sizeof(buf) - 1);

    while (bytesRead > 0) {
        buf[bytesRead] = '\0';

        @synchronized(self.lineBuffer) {
            [self.lineBuffer appendFormat:@"%s", buf];

            NSArray<NSString *> *lines =
                [self.lineBuffer componentsSeparatedByString:@"\n"];

            NSUInteger lineCount = lines.count;
            if (lineCount > 0) {
                NSString *incompleteLine = lines.lastObject;
                self.lineBuffer = [incompleteLine mutableCopy] ?: [NSMutableString string];

                for (NSUInteger i = 0; i < lineCount - 1; i++) {
                    NSString *rawLine = lines[i];
                    if (rawLine.length == 0) continue;
                    [self processRawLogLine:rawLine];
                }
            }
        }

        bytesRead = read(self.pipeReadFD, buf, sizeof(buf) - 1);
    }
}

#pragma mark - Log Processing

- (void)processRawLogLine:(NSString *)rawLine {
    if (!self.isMonitoring) return;

    NSString *trimmed = [rawLine stringByTrimmingCharactersInSet:
        [NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (trimmed.length == 0) return;

    NSRegularExpression *regex = [NSRegularExpression
        regularExpressionWithPattern:@"^\\d{4}-\\d{2}-\\d{2}.*\\[[0-9]+:[0-9]+\\]"
        options:0 error:nil];
    NSTextCheckingResult *match = [regex firstMatchInString:trimmed options:0
        range:NSMakeRange(0, trimmed.length)];
    if (!match) return;

    PluginConfig *config = [PluginConfig shared];
    if (config.nsLogKeywords.length > 0) {
        NSArray<NSString *> *keywords =
            [config.nsLogKeywords componentsSeparatedByString:@","];
        BOOL matched = NO;
        for (NSString *kw in keywords) {
            NSString *trimmedKW = [kw stringByTrimmingCharactersInSet:
                [NSCharacterSet whitespaceAndNewlineCharacterSet]];
            if (trimmedKW.length > 0 && [trimmed containsString:trimmedKW]) {
                matched = YES;
                break;
            }
        }
        if (!matched) return;
    }

    [self appendLogEntry:trimmed];
}

- (void)appendLogEntry:(NSString *)entry {
    NSString *timestamped = [NSString stringWithFormat:@"[%@] %@",
        [self timestampString], entry];

    @synchronized(self.logEntries) {
        [self.logEntries addObject:timestamped];

        static const NSUInteger kMaxLogs = 2000;
        while (self.logEntries.count > kMaxLogs) {
            [self.logEntries removeObjectAtIndex:0];
        }
    }

    if ([PluginConfig shared].nsLogLocalSave) {
        [self writeToFile:timestamped];
    }
}

- (NSString *)timestampString {
    NSDateFormatter *fmt = [[NSDateFormatter alloc] init];
    fmt.dateFormat = @"HH:mm:ss.SSS";
    return [fmt stringFromDate:[NSDate date]];
}

#pragma mark - File Write

- (void)writeToFile:(NSString *)line {
    if (!self.fileWriteQueue) {
        self.fileWriteQueue = dispatch_queue_create(
            "com.mioplugin.logmonitor.file", DISPATCH_QUEUE_SERIAL);
    }

    dispatch_async(self.fileWriteQueue, ^{
        if (!self.logFilePath) {
            NSArray *dirs = NSSearchPathForDirectoriesInDomains(
                NSDocumentDirectory, NSUserDomainMask, YES);
            NSString *folder = [dirs.firstObject stringByAppendingPathComponent:@"MioPlugin_NSLogs"];
            [[NSFileManager defaultManager] createDirectoryAtPath:folder
                                    withIntermediateDirectories:YES attributes:nil error:nil];

            NSDateFormatter *df = [[NSDateFormatter alloc] init];
            df.dateFormat = @"yyyy-MM-dd-HHmmss";
            self.logFilePath = [folder stringByAppendingPathComponent:
                [NSString stringWithFormat:@"%@.txt", [df stringFromDate:[NSDate date]]]];
        }

        NSString *dataStr = [NSString stringWithFormat:@"%@\n", line];
        NSData *data = [dataStr dataUsingEncoding:NSUTF8StringEncoding];
        NSFileHandle *handle = [NSFileHandle fileHandleForWritingAtPath:self.logFilePath];
        if (handle) {
            [handle seekToEndOfFile];
            [handle writeData:data];
            [handle closeFile];
        } else {
            [dataStr writeToFile:self.logFilePath atomically:YES encoding:NSUTF8StringEncoding error:nil];
        }
    });
}

- (void)dealloc {
    if (self.readSource) {
        dispatch_source_cancel(self.readSource);
        self.readSource = nil;
    }
    if (self.pipeReadFD >= 0) {
        close(self.pipeReadFD);
    }
}

@end
