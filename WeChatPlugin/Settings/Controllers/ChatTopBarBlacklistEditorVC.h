#import <UIKit/UIKit.h>

@interface ChatTopBarBlacklistEditorVC : UIViewController
@property (nonatomic, copy) NSString *blacklist;
@property (nonatomic, copy) void (^saveBlock)(NSString *blacklist);
@end