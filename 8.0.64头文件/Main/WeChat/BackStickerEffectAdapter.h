@interface BackStickerEffectAdapter : WeEffectBaseAdapter
{
    NSMutableArray * _stickerArr; // +0x8
}
+ (id)weeffectType;
- (id)stickerArr;
- (void)load;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)onZipFetchDoneWithPath:(id)arg1;
- (id)generateJsonDic;
- (void)setStickerArr:(id)arg1;
- (void).cxx_destruct;
@end
