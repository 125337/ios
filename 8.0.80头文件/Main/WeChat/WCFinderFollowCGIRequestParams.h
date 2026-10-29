@interface WCFinderFollowCGIRequestParams : NSObject
{
    BOOL _ignoreFollowToast; // +0x8
    int _reportScene; // +0xc
    int _enterType; // +0x10
    unsigned int _enhanceFollowBtn; // +0x14
    NSString * _posterUsername; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _refObjectID; // +0x28
    unsigned long long _opType; // +0x30
    NSString * _sessionBuffer; // +0x38
    unsigned long long _followScene; // +0x40
    NSString * _sessionExtraKey; // +0x48
    NSData * _liveCookies; // +0x50
    unsigned long long _fromMentionID; // +0x58
    NSDictionary * _clientUdfKv; // +0x60
    FinderFollowNewLifeReportInfo * _newlifeReportInfo; // +0x68
    NSString * _refMicID; // +0x70
}
- (id)initWithPosterUsername:(id)arg1 reportScene:(int)arg2 optype:(unsigned long long)arg3 enterType:(int)arg4 followScene:(unsigned long long)arg5;
- (id)posterUsername;
- (void)setPosterUsername:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)refObjectID;
- (void)setRefObjectID:(id)arg1;
- (int)reportScene;
- (void)setReportScene:(int)arg1;
- (unsigned long long)opType;
- (void)setOpType:(unsigned long long)arg1;
- (int)enterType;
- (void)setEnterType:(int)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned long long)followScene;
- (void)setFollowScene:(unsigned long long)arg1;
- (id)sessionExtraKey;
- (void)setSessionExtraKey:(id)arg1;
- (id)liveCookies;
- (void)setLiveCookies:(id)arg1;
- (unsigned long long)fromMentionID;
- (void)setFromMentionID:(unsigned long long)arg1;
- (unsigned int)enhanceFollowBtn;
- (void)setEnhanceFollowBtn:(unsigned int)arg1;
- (id)clientUdfKv;
- (void)setClientUdfKv:(id)arg1;
- (id)newlifeReportInfo;
- (void)setNewlifeReportInfo:(id)arg1;
- (id)refMicID;
- (void)setRefMicID:(id)arg1;
- (BOOL)ignoreFollowToast;
- (void)setIgnoreFollowToast:(BOOL)arg1;
- (void).cxx_destruct;
@end
