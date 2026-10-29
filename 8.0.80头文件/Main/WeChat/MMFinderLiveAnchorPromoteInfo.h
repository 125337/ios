@interface MMFinderLiveAnchorPromoteInfo : NSObject
{
    BOOL _isPromoting; // +0x8
    BOOL _readyToDisplay; // +0x9
    BOOL _showAudience; // +0xa
    unsigned int _type; // +0xc
    unsigned int _status; // +0x10
    unsigned long long _promoteId; // +0x18
    NSString * _statusTips; // +0x20
    NSString * _anchorUsername; // +0x28
}
+ (id)createAnchorPromoteInfoFrom:(id)arg1;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)promoteKey;
- (BOOL)shouldSkipReportOnPromoteManagerPanelStart;
- (unsigned long long)promoteId;
- (void)setPromoteId:(unsigned long long)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (BOOL)isPromoting;
- (void)setIsPromoting:(BOOL)arg1;
- (BOOL)readyToDisplay;
- (void)setReadyToDisplay:(BOOL)arg1;
- (BOOL)showAudience;
- (void)setShowAudience:(BOOL)arg1;
- (unsigned int)status;
- (void)setStatus:(unsigned int)arg1;
- (id)statusTips;
- (void)setStatusTips:(id)arg1;
- (id)anchorUsername;
- (void)setAnchorUsername:(id)arg1;
- (void).cxx_destruct;
@end
