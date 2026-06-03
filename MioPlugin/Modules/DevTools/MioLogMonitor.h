#import <Foundation/Foundation.h>

@interface MioLogMonitor : NSObject

+ (instancetype)sharedInstance;

- (void)startMonitoring;
- (void)stopMonitoring;
- (BOOL)isRunning;

- (NSArray<NSString *> *)allLogs;
- (void)clearLogs;
- (NSString *)exportLogsAsString;
- (NSArray<NSString *> *)filteredLogs;

- (void)enableLocalSave:(BOOL)enabled;
- (NSString *)currentLogFilePath;

@end
