@interface BTMsgSectionData : BTBaseSectionData
{
    CMessageWrap * _msgWrap; // +0x8
    NSMutableArray * _arrItemCellViewModel; // +0x10
    unsigned int _displayMode; // +0x18
}
+ (void)registerMsgSectionDataClass:(Class)arg1;
+ (void)initMsgSectionDataClassList;
+ (id)createSectionDataWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;
+ (BOOL)canCreateSectionDataWithMsgWrap:(id)arg1;
- (id)initWithMsgWrap:(id)arg1 sectionWidth:(double)arg2 displayMode:(unsigned int)arg3 delegate:(id)arg4;
- (unsigned long long)sequenceId;
- (unsigned int)createTime;
- (unsigned long long)sectionType;
- (double)heightForSectionFooter;
- (BOOL)isExposed;
- (id)identifierWithRow:(unsigned long long)arg1;
- (void)updateMsgWrap:(id)arg1;
- (void)msgWrapMarkExposed;
- (void)msgWrapMarkValidExposed;
- (id)msgWrap;
- (id)arrItemCellViewModel;
- (unsigned int)displayMode;
- (void)setDisplayMode:(unsigned int)arg1;
- (void).cxx_destruct;
@end

