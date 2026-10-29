@interface CBPrologueSectionInfo : NSObject
{
    PrologueMsgSectionProperty * _metaInfo; // +0x8
    unsigned long long _curDisplayCount; // +0x10
    NSMutableArray * _displayMsgList; // +0x18
}
- (id)init;
- (long long)newListDefaultUnfoldDisplayCount;
- (long long)newListExpandCount;
- (long long)historyListDefaultUnfoldDisplayCount;
- (long long)historyListExpandCount;
- (id)metaInfo;
- (void)setMetaInfo:(id)arg1;
- (unsigned long long)curDisplayCount;
- (void)setCurDisplayCount:(unsigned long long)arg1;
- (id)displayMsgList;
- (void)setDisplayMsgList:(id)arg1;
- (void).cxx_destruct;
@end
