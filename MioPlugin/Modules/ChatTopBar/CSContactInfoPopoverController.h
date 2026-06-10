// CSContactInfoPopoverController.h
#import <UIKit/UIKit.h>

@interface CSContactInfoPopoverController : UIViewController <UIAdaptivePresentationControllerDelegate>

@property (nonatomic, strong) id contact;              // WeChat CContact 对象（strong 持有）
@property (nonatomic, strong) NSString *wxid;          // 提前提取，用于判断群聊/公众号
@property (nonatomic, strong) UIImage *avatarImage;    // 头像

- (instancetype)initWithContact:(id)contact avatar:(UIImage *)avatar;

@end