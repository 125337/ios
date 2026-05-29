#import <Foundation/Foundation.h>

#define WPLog(tag, fmt, ...) \
    do { \
        NSString *_msg = [NSString stringWithFormat:(fmt), ##__VA_ARGS__]; \
        NSLog(@"[%@] %@", (tag), _msg); \
        [_WPLogManager writeTag:(tag) content:_msg]; \
    } while(0)

@interface _WPLogManager : NSObject
+ (void)writeTag:(NSString *)tag content:(NSString *)content;
@end