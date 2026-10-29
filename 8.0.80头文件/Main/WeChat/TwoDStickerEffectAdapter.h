@interface TwoDStickerEffectAdapter : WeEffectBaseAdapter
{
    NSMutableArray * _stickerArr; // +0x8
    NSDictionary * _templateTransSet; // +0x10
}
+ (id)weeffectType;
- (id)stickerArr;
- (void)load;
- (void)onJsonWriteDoneWithPath:(id)arg1;
- (void)onZipFetchDoneWithPath:(id)arg1;
- (id)generateJsonDic;
- (void)setStickerArr:(id)arg1;
- (id)templateTransSet;
- (void)setTemplateTransSet:(id)arg1;
- (void).cxx_destruct;
@end
