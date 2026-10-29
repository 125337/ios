@interface MMEmoticonStoreDownloadViewConfig : NSObject
{
    BOOL _showProgressView; // +0x8
    BOOL _isDownloadCancelEnabled; // +0x9
    BOOL _useStaticWidth; // +0xa
    long long _notPurchaseView; // +0x10
    long long _purchasingView; // +0x18
    long long _freeView; // +0x20
    long long _purchasedView; // +0x28
    long long _downloadedView; // +0x30
    long long _downloadFailView; // +0x38
    long long _expiredView; // +0x40
    NSArray * _additionalAvaliableBtnTypes; // +0x48
}
- (id)init;
- (id)description;
- (long long)notPurchaseView;
- (void)setNotPurchaseView:(long long)arg1;
- (long long)purchasingView;
- (void)setPurchasingView:(long long)arg1;
- (long long)freeView;
- (void)setFreeView:(long long)arg1;
- (long long)purchasedView;
- (void)setPurchasedView:(long long)arg1;
- (long long)downloadedView;
- (void)setDownloadedView:(long long)arg1;
- (long long)downloadFailView;
- (void)setDownloadFailView:(long long)arg1;
- (long long)expiredView;
- (void)setExpiredView:(long long)arg1;
- (BOOL)showProgressView;
- (void)setShowProgressView:(BOOL)arg1;
- (BOOL)isDownloadCancelEnabled;
- (void)setIsDownloadCancelEnabled:(BOOL)arg1;
- (BOOL)useStaticWidth;
- (void)setUseStaticWidth:(BOOL)arg1;
- (id)additionalAvaliableBtnTypes;
- (void)setAdditionalAvaliableBtnTypes:(id)arg1;
- (void).cxx_destruct;
@end

