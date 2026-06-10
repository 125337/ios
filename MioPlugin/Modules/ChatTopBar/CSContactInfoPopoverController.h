// CSContactInfoPopoverController.h
#import <UIKit/UIKit.h>

@interface CSContactInfoPopoverController : UIViewController <UIAdaptivePresentationControllerDelegate>

@property (nonatomic, strong) NSString *wxid;              // 微信号
@property (nonatomic, strong) NSString *nickname;          // 昵称
@property (nonatomic, strong) NSString *remark;            // 备注
@property (nonatomic, strong) NSString *gender;            // 性别（"男"/"女"/"未知"）
@property (nonatomic, strong) NSString *location;          // 地区
@property (nonatomic, strong) NSString *signature;         // 签名/简介
@property (nonatomic, strong) NSString *groupOwner;        // 群主 wxid
@property (nonatomic, strong) NSString *chatRoomMemList;   // 群成员 wxid 列表（分号分隔）
@property (nonatomic, strong) NSString *chatRoomAdminList; // 群管理员 wxid 列表（分号分隔）
@property (nonatomic, strong) UIImage *avatarImage;        // 头像

- (instancetype)initWithWxid:(NSString *)wxid
                    nickname:(NSString *)nickname
                      avatar:(UIImage *)avatar;

@end
