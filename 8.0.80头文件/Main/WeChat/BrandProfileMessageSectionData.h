@interface BrandProfileMessageSectionData : BrandProfileBaseSectionData
{
    BOOL _didUnfoldItemList; // +0x8
    BOOL _isBrandManagerMode; // +0x9
    BOOL _isTextMsg; // +0xa
    BOOL _hasPublishTimeHeader; // +0xb
    BOOL _isFeatureMsg; // +0xc
    BOOL _isFeatureMsgFold; // +0xd
    unsigned int _groupMsgID; // +0x10
    unsigned int _groupAppmsgID; // +0x14
    unsigned int _groupMsgIndex; // +0x18
    unsigned int _publishTime; // +0x1c
    unsigned long long _tabType; // +0x20
    NSMutableArray * _arrItemMsg; // +0x28
    BizMessage * _groupMsg; // +0x30
    NSString * _groupUniqueIDStr; // +0x38
    NSString * _publishTimeStr; // +0x40
    NSMutableArray * _viewModelList; // +0x48
    NSMutableArray * _itemViewModelList; // +0x50
    unsigned long long _publishStatus; // +0x58
    CContact * _brandContact; // +0x60
    BrandProfileMsgFooterViewModel * _footerVM; // +0x68
}
- (void)setIsBrandManagerMode:(BOOL)arg1;
- (unsigned long long)itemShowCount;
- (id)initWithGroupMsg:(id)arg1 sectionWidth:(double)arg2 tabType:(unsigned long long)arg3 isFeatureMsg:(BOOL)arg4;
- (BOOL)isPicGroupMessage;
- (BOOL)shouldRenderItemAsPicGroup:(id)arg1;
- (BOOL)isFeatureMsg;
- (BOOL)shouldFoldFeatureMsg;
- (id)buildPicGroupViewModel;
- (id)buildPicGroupViewModelWithItemMessages:(id)arg1;
- (void)addHeaderViewModel;
- (void)addFooterViewModel;
- (void)addReaderViewModelList;
- (void)__appendMsgItem:(id)arg1;
- (unsigned long long)headerType;
- (unsigned long long)itemCount;
- (unsigned long long)indexForItemModel:(id)arg1;
- (BOOL)removeItemModel:(id)arg1;
- (void)clearLayoutCache;
- (BOOL)isTopItemShowLargeCover;
- (BOOL)isTopItemReader;
- (double)topItemPadding;
- (BOOL)isItemListFold;
- (unsigned int)itemFoldLeftCount;
- (void)setPublishTime:(unsigned int)arg1;
- (void)onUnfoldFeatureHeader;
- (void)onUnfoldItemListFooter;
- (void)removeFooterIfNeed;
- (long long)numberOfRowsInSection;
- (double)heightForHeaderInSection;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (unsigned long long)sectionType;
- (id)genDateTimeStringByUInt:(unsigned int)arg1;
- (BOOL)isOutboxMsg;
- (void)setPublishStatus:(unsigned long long)arg1;
- (unsigned long long)tabType;
- (BOOL)isBrandManagerMode;
- (id)arrItemMsg;
- (void)setArrItemMsg:(id)arg1;
- (id)groupMsg;
- (void)setGroupMsg:(id)arg1;
- (unsigned int)groupMsgID;
- (void)setGroupMsgID:(unsigned int)arg1;
- (id)groupUniqueIDStr;
- (void)setGroupUniqueIDStr:(id)arg1;
- (unsigned int)groupAppmsgID;
- (void)setGroupAppmsgID:(unsigned int)arg1;
- (unsigned int)groupMsgIndex;
- (void)setGroupMsgIndex:(unsigned int)arg1;
- (unsigned int)publishTime;
- (BOOL)isTextMsg;
- (void)setIsTextMsg:(BOOL)arg1;
- (BOOL)hasPublishTimeHeader;
- (void)setHasPublishTimeHeader:(BOOL)arg1;
- (id)publishTimeStr;
- (id)viewModelList;
- (id)itemViewModelList;
- (void)setItemViewModelList:(id)arg1;
- (unsigned long long)publishStatus;
- (id)brandContact;
- (void)setBrandContact:(id)arg1;
- (void)setIsFeatureMsg:(BOOL)arg1;
- (BOOL)isFeatureMsgFold;
- (void)setIsFeatureMsgFold:(BOOL)arg1;
- (id)footerVM;
- (void)setFooterVM:(id)arg1;
- (void).cxx_destruct;
@end
