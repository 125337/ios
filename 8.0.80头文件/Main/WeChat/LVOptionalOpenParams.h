@interface LVOptionalOpenParams : NSObject
{
    BOOL _needUpdateContextId; // +0x8
    BOOL _forbidCheckLimitMode; // +0x9
    int _entryScene; // +0xc
    int _entryCardType; // +0x10
    int _getRelatedListScene; // +0x14
    NSString * _reportExtraInfo; // +0x18
    NSString * _fromSessionId; // +0x20
    NSString * _sourceContextId; // +0x28
    NSString * _sourceTabContextId; // +0x30
    WCFinderSimplePlayerView * _player; // +0x38
    UIView * _fromCardSnapshot; // +0x40
}
- (id)init;
- (BOOL)needUpdateContextId;
- (void)setNeedUpdateContextId:(BOOL)arg1;
- (BOOL)forbidCheckLimitMode;
- (void)setForbidCheckLimitMode:(BOOL)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (int)entryCardType;
- (void)setEntryCardType:(int)arg1;
- (id)reportExtraInfo;
- (void)setReportExtraInfo:(id)arg1;
- (int)getRelatedListScene;
- (void)setGetRelatedListScene:(int)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (id)sourceContextId;
- (void)setSourceContextId:(id)arg1;
- (id)sourceTabContextId;
- (void)setSourceTabContextId:(id)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (id)fromCardSnapshot;
- (void)setFromCardSnapshot:(id)arg1;
- (void).cxx_destruct;
@end
