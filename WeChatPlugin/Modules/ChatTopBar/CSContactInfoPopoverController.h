// CSContactInfoPopoverController.h — MRC 环境
#import <UIKit/UIKit.h>

@interface CSContactInfoPopoverController : UIViewController

@property (nonatomic, retain) id contact;                    // WeChat CContact 对象
@property (nonatomic, retain) NSString *wxid;                // 微信号
@property (nonatomic, retain) UIImage *avatarImage;          // 头像

// 初始化（传入 contact + 头像）
- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar;

@end