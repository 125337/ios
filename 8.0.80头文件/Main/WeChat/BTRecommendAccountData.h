@interface BTRecommendAccountData : NSObject
{
    NSString * _bizNickName; // +0x8
    NSString * _bizUserName; // +0x10
    NSString * _headerUrl; // +0x18
    NSString * _signature; // +0x20
    NSString * _recommendReason; // +0x28
    NSString * _appMsgRecommendReason; // +0x30
    NSArray * _arrAppMsg; // +0x38
    BTRecommendUserInfo * _userInfo; // +0x40
}
- (id)bizNickName;
- (void)setBizNickName:(id)arg1;
- (id)bizUserName;
- (void)setBizUserName:(id)arg1;
- (id)headerUrl;
- (void)setHeaderUrl:(id)arg1;
- (id)signature;
- (void)setSignature:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)appMsgRecommendReason;
- (void)setAppMsgRecommendReason:(id)arg1;
- (id)arrAppMsg;
- (void)setArrAppMsg:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
