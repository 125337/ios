@interface WCAdBlankBannerView : WCAdBaseBarView
{
    WCDataItem * _dataItem; // +0x8
    unsigned long long _itemScene; // +0x10
}
+ (double)viewHeight:(id)arg1 maxWidth:(double)arg2;
+ (double)topMargin:(id)arg1 maxWidth:(double)arg2;
+ (double)bottomMargin;
- (id)initWithFrame:(CGRect)arg1 dataItem:(id)arg2 contentItemScene:(unsigned long long)arg3;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (unsigned long long)itemScene;
- (void)setItemScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
