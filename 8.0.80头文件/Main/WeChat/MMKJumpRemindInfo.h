@interface MMKJumpRemindInfo : NSObject
{
    BOOL _isPopUpWindows; // +0x8
    int _jumpType; // +0xc
    NSString * _wording; // +0x10
    NSString * _leftButtonWording; // +0x18
    NSString * _rightButtonWording; // +0x20
    MMKRedirectUrl * _url; // +0x28
    NSString * _title; // +0x30
}
+ (id)KJumpRemindInfoWithJumpType:(int)arg1 isPopUpWindows:(BOOL)arg2 wording:(id)arg3 leftButtonWording:(id)arg4 rightButtonWording:(id)arg5 url:(id)arg6 title:(id)arg7;
- (id)initWithJumpType:(int)arg1 isPopUpWindows:(BOOL)arg2 wording:(id)arg3 leftButtonWording:(id)arg4 rightButtonWording:(id)arg5 url:(id)arg6 title:(id)arg7;
- (id)description;
- (int)jumpType;
- (BOOL)isPopUpWindows;
- (id)wording;
- (id)leftButtonWording;
- (id)rightButtonWording;
- (id)url;
- (id)title;
- (void).cxx_destruct;
@end
