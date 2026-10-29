@interface MMFinderLiveMilestoneLotteryDetailMenuItem : NSObject
{
    FinderLiveMilestoneLotteryMetaInfo_MetaInfo * _metaInfo; // +0x8
    unsigned long long _style; // +0x10
    NSString * _time; // +0x18
    NSString * _title; // +0x20
    NSString * _subtitle; // +0x28
    id /* block */ _selectCallback; // +0x30
}
- (id)metaInfo;
- (void)setMetaInfo:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (id)time;
- (void)setTime:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id /* block */)selectCallback;
- (void)setSelectCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

