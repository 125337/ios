@interface BrandProfileItemBaseViewModel : BrandProfileMsgBaseViewModel <BrandPaySubcribeMgrExt>
{
    BOOL _hasDesc; // +0x10
    BOOL _hasLandingPage; // +0x11
    BOOL _isPayContent; // +0x12
    BOOL _isPaid; // +0x13
    BOOL _isPaySubcribeOpen; // +0x14
    BizMessage * _groupMsg; // +0x18
    BizAppMsgDetailInfo * _itemMsg; // +0x20
    NSString * _title; // +0x28
    NSMutableArray * _titleLabelStyles; // +0x30
    NSString * _desc; // +0x38
    NSString * _pageIdentifier; // +0x40
    double _height; // +0x48
    CGSize _titleSize; // +0x50
}
+ (id)createViewModelWithItemMsg:(id)arg1 groupMsg:(id)arg2;
+ (id)createViewModelWithGroupMsg:(id)arg1;
- (id)initWithItemMsg:(id)arg1;
- (id)initWithGroupMsg:(id)arg1;
- (id)tableViewCellClassName;
- (void)clearLayoutCache;
- (BOOL)hasDesc;
- (unsigned long long)itemIndex;
- (unsigned long long)itemCount;
- (unsigned long long)itemPosition;
- (id)coverImgURL;
- (double)calCellHeight;
- (double)titleMaxWidth;
- (id)titleFont;
- (unsigned long long)titleLineNumber;
- (id)titleLabelStyles;
- (CGSize)titleSize;
- (double)firstItemTopPadding;
- (void)onUpdateMPPagePaySubcribeHasPaidWithPageIdentifier:(id)arg1 fullUrl:(id)arg2;
- (void)updatePayStatus:(BOOL)arg1;
- (id)groupMsg;
- (void)setGroupMsg:(id)arg1;
- (id)itemMsg;
- (void)setItemMsg:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)setTitleSize:(CGSize)arg1;
- (void)setTitleLabelStyles:(id)arg1;
- (id)desc;
- (void)setDesc:(id)arg1;
- (void)setHasDesc:(BOOL)arg1;
- (BOOL)hasLandingPage;
- (void)setHasLandingPage:(BOOL)arg1;
- (BOOL)isPayContent;
- (void)setIsPayContent:(BOOL)arg1;
- (BOOL)isPaid;
- (void)setIsPaid:(BOOL)arg1;
- (id)pageIdentifier;
- (void)setPageIdentifier:(id)arg1;
- (BOOL)isPaySubcribeOpen;
- (void)setIsPaySubcribeOpen:(BOOL)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (void).cxx_destruct;
@end
