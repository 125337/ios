@interface _TtC6WeChat20FTSRowModelContainer : NSObject <MMListDiffable>
{
    id <_TtP6WeChat11FTSRowModel_> model; // +0x8
    SearchMatchTip * matchTip; // +0x10
    unsigned long long type; // +0x18
}
- (id)diffIdentifier;
- (id)model;
- (id)matchTip;
- (unsigned long long)type;
- (id)initWithModel:(id)arg1 matchTip:(id)arg2 type:(unsigned long long)arg3;
- (id)initWithContact:(id)arg1 type:(unsigned long long)arg2 isDetailSearch:(BOOL)arg3;
- (id)initWithFeature:(id)arg1 type:(unsigned long long)arg2 isDetailSearch:(BOOL)arg3 searchText:(id)arg4;
- (id)initWithWeshop:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithSetting:(id)arg1 type:(unsigned long long)arg2 isDetailSearch:(BOOL)arg3 searchText:(id)arg4;
- (id)initWithAihistory:(id)arg1 type:(unsigned long long)arg2;
- (id)init;
- (void).cxx_destruct;
@end
