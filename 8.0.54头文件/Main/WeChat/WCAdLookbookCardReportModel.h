@interface WCAdLookbookCardReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned int _scrollCount; // +0x8
    unsigned int _slideCount; // +0xc
    NSMutableArray * _reportItemList; // +0x10
    WCAdLookbookCardReportItemModel * _brandNewItem; // +0x18
}
- (unsigned int)scrollCount;
- (void)setScrollCount:(unsigned int)arg1;
- (unsigned int)slideCount;
- (void)setSlideCount:(unsigned int)arg1;
- (id)reportItemList;
- (void)setReportItemList:(id)arg1;
- (id)brandNewItem;
- (void)setBrandNewItem:(id)arg1;
- (void).cxx_destruct;
@end

