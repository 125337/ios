@interface MMLiveFeedStreamStyleableUIExposeModel : MMLiveFeedStreamStyleableUIActionBaseModel
{
    BOOL _reportKvExposeOnStart; // +0x18
    unsigned long long _exposeTs; // +0x20
    FinderWindowProductInfo * _productInfo; // +0x28
    unsigned long long _tagType; // +0x30
    unsigned long long _unreadCount; // +0x38
    NSString * _lotteryId; // +0x40
    NSString * _guideBarTxt; // +0x48
    unsigned long long _guideBarType; // +0x50
}
- (unsigned long long)exposeTs;
- (void)setExposeTs:(unsigned long long)arg1;
- (BOOL)reportKvExposeOnStart;
- (void)setReportKvExposeOnStart:(BOOL)arg1;
- (id)productInfo;
- (void)setProductInfo:(id)arg1;
- (unsigned long long)tagType;
- (void)setTagType:(unsigned long long)arg1;
- (unsigned long long)unreadCount;
- (void)setUnreadCount:(unsigned long long)arg1;
- (id)lotteryId;
- (void)setLotteryId:(id)arg1;
- (id)guideBarTxt;
- (void)setGuideBarTxt:(id)arg1;
- (unsigned long long)guideBarType;
- (void)setGuideBarType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

