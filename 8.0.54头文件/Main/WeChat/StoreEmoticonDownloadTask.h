@interface StoreEmoticonDownloadTask : NSObject
{
    BOOL _isNeedWWANDownload; // +0x8
    EmotionSummary * _itemSummary; // +0x10
}
- (id)init;
- (id)itemSummary;
- (void)setItemSummary:(id)arg1;
- (BOOL)isNeedWWANDownload;
- (void)setIsNeedWWANDownload:(BOOL)arg1;
- (void).cxx_destruct;
@end

