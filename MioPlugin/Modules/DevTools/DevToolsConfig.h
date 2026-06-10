#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface DevToolsConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL nsLogMonitorEnabled;
@property (nonatomic, assign) BOOL nsLogLocalSave;
@property (nonatomic, copy) NSString *nsLogKeywords;
@property (nonatomic, assign) BOOL navMonitorEnabled;

+ (instancetype)shared;

@end