@interface MMNoticeItem : NSObject
{
    int _isShowNotice; // +0x8
    NSString * _wording; // +0x10
    NSString * _leftIcon; // +0x18
    NSString * _jumpUrl; // +0x20
    NSString * _noticeId; // +0x28
}
+ (id)NoticeItemWithIsShowNotice:(int)arg1 wording:(id)arg2 leftIcon:(id)arg3 jumpUrl:(id)arg4 noticeId:(id)arg5;
- (id)initWithIsShowNotice:(int)arg1 wording:(id)arg2 leftIcon:(id)arg3 jumpUrl:(id)arg4 noticeId:(id)arg5;
- (id)description;
- (int)isShowNotice;
- (id)wording;
- (id)leftIcon;
- (id)jumpUrl;
- (id)noticeId;
- (void).cxx_destruct;
@end

