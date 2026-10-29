@interface _TtC6WeChat19WSFlowListCellModel : NSObject
{
    unsigned long long type; // +0x8
    _TtC6WeChat21WSFlowListLiteAppInfo * liteAppInfo; // +0x10
    _TtC6WeChat24WSFlowListFinderFeedInfo * finderFeedInfo; // +0x18
    void * extInfo; // +0x20
    void * topText; // +0x30
    void * tailText; // +0x40
    void * identifier; // +0x50
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)liteAppInfo;
- (void)setLiteAppInfo:(id)arg1;
- (id)finderFeedInfo;
- (void)setFinderFeedInfo:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)topText;
- (void)setTopText:(id)arg1;
- (id)tailText;
- (void)setTailText:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end
