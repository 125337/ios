@interface TextStatePublishEntranceViewReportObj : NSObject
{
    BOOL _isFromCardView; // +0x8
    BOOL _isSelfCard; // +0x9
    unsigned int _enterScene; // +0xc
    NSString * _viewId; // +0x10
    NSString * _sessionId; // +0x18
    NSString * _statusId; // +0x20
    NSString * _username; // +0x28
    NSDictionary * _customParams; // +0x30
}
- (id)initWithViewId:(id)arg1 enterScene:(unsigned int)arg2 sessionId:(id)arg3 statusId:(id)arg4 isFromCardView:(BOOL)arg5 isSelfCard:(BOOL)arg6 username:(id)arg7 customParams:(id)arg8;
- (id)viewId;
- (void)setViewId:(id)arg1;
- (unsigned int)enterScene;
- (void)setEnterScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)statusId;
- (void)setStatusId:(id)arg1;
- (BOOL)isFromCardView;
- (void)setIsFromCardView:(BOOL)arg1;
- (BOOL)isSelfCard;
- (void)setIsSelfCard:(BOOL)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)customParams;
- (void)setCustomParams:(id)arg1;
- (void).cxx_destruct;
@end
