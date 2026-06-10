#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface AttachLayoutConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL attachLayoutEnabled;
@property (nonatomic, copy) NSString *attachLayoutColumns;
@property (nonatomic, copy) NSString *attachLayoutRows;

+ (instancetype)shared;

@end