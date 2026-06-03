#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MioNavMonitor : NSObject

+ (instancetype)sharedInstance;

- (void)startMonitoring;
- (void)stopMonitoring;
- (BOOL)isMonitoring;

- (NSArray<NSString *> *)allLogs;
- (void)clearLogs;
- (NSString *)exportLogsAsString;
- (NSAttributedString *)currentViewControllerHierarchy;

@end
