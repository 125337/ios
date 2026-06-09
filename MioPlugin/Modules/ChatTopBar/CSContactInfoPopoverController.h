// CSContactInfoPopoverController.h
#import <UIKit/UIKit.h>

@interface CSContactInfoPopoverController : UIViewController <UIAdaptivePresentationControllerDelegate>

@property (nonatomic, strong) id contact;                    // WeChat CContact 对象
@property (nonatomic, strong) NSString *wxid;                // 微信号
@property (nonatomic, strong) UIImage *avatarImage;          // 头像

// 初始化（传入 contact + 头像）
- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar;

@end