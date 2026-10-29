@interface MMFinderLivePurchasedFeedCell : MMMultiMenuTableViewCell
{
    MMUIView * _bubbleContentView; // +0x40
    WCFinderFeedImageCDNView * _coverImageView; // +0x48
    WCFinderHeadImageView * _anchorHeadImageView; // +0x50
    MMUILabel * _anchorNameLabel; // +0x58
    MMWebImageView * _authIconView; // +0x60
    MMUILabel * _contentDescLabel; // +0x68
    MMUILabel * _createTimeLabel; // +0x70
    MMUILabel * _statusLabel; // +0x78
    WCFinderDataItem * _dataItem; // +0x80
    WCFinderPurchasedItem * _purchasedItem; // +0x88
}
+ (id)identifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)updateWithPurchasedItem:(id)arg1;
- (void)updateWithECObject:(id)arg1;
- (void)clearCoverImage;
- (void)updateWithDataItem:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)willAppear;
- (id)bubbleContentView;
- (void)setBubbleContentView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)anchorNameLabel;
- (void)setAnchorNameLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (id)contentDescLabel;
- (void)setContentDescLabel:(id)arg1;
- (id)createTimeLabel;
- (void)setCreateTimeLabel:(id)arg1;
- (id)statusLabel;
- (void)setStatusLabel:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)purchasedItem;
- (void)setPurchasedItem:(id)arg1;
- (void).cxx_destruct;
@end

