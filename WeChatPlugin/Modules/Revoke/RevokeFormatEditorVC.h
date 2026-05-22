#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface RevokeFormatEditorVC : UIViewController

@property (nonatomic, copy, nullable) NSString *initialFormat;
@property (nonatomic, copy, nullable) void (^saveBlock)(NSString *format);

@end

NS_ASSUME_NONNULL_END