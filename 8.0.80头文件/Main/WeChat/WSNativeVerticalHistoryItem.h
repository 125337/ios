@interface WSNativeVerticalHistoryItem : NSObject
{
    unsigned int _optype; // +0x8
    unsigned int _deletable; // +0xc
    unsigned int _timestamp; // +0x10
    unsigned int _clientversion; // +0x14
    unsigned int _scene; // +0x18
    unsigned int _businesstype; // +0x1c
    unsigned int _guessIntervalHours; // +0x20
    unsigned int _parentType; // +0x24
    NSString * _hotword; // +0x28
    NSString * _historyId; // +0x30
    NSString * _mixerCommonContext; // +0x38
    NSString * _finderCommentJumpReferer; // +0x40
    NSString * _localAccInfo; // +0x48
    NSString * _extInfo; // +0x50
    NSString * _docPullType; // +0x58
    NSArray * _extReqParams; // +0x60
    NSArray * _checkboxes; // +0x68
    NSString * _requestId; // +0x70
    NSDictionary * _extLocalInfo; // +0x78
    NSString * _searchId; // +0x80
}
- (void)fromDict:(id)arg1;
- (id)toDict;
- (unsigned int)optype;
- (void)setOptype:(unsigned int)arg1;
- (id)hotword;
- (void)setHotword:(id)arg1;
- (unsigned int)deletable;
- (void)setDeletable:(unsigned int)arg1;
- (id)historyId;
- (void)setHistoryId:(id)arg1;
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (unsigned int)clientversion;
- (void)setClientversion:(unsigned int)arg1;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (unsigned int)businesstype;
- (void)setBusinesstype:(unsigned int)arg1;
- (unsigned int)guessIntervalHours;
- (void)setGuessIntervalHours:(unsigned int)arg1;
- (id)mixerCommonContext;
- (void)setMixerCommonContext:(id)arg1;
- (id)finderCommentJumpReferer;
- (void)setFinderCommentJumpReferer:(id)arg1;
- (id)localAccInfo;
- (void)setLocalAccInfo:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)docPullType;
- (void)setDocPullType:(id)arg1;
- (unsigned int)parentType;
- (void)setParentType:(unsigned int)arg1;
- (id)extReqParams;
- (void)setExtReqParams:(id)arg1;
- (id)checkboxes;
- (void)setCheckboxes:(id)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)extLocalInfo;
- (void)setExtLocalInfo:(id)arg1;
- (id)searchId;
- (void)setSearchId:(id)arg1;
- (void).cxx_destruct;
@end
