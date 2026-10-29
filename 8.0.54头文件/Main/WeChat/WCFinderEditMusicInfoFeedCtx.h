@interface WCFinderEditMusicInfoFeedCtx : NSObject
{
    NSString * _tid; // +0x8
    NSString * _originalId; // +0x10
    FinderOriginalTypeItem * _originalItem; // +0x18
    id /* block */ _onComplete; // +0x20
    id <WCFinderEditMusicMediaAudioUrlAdapter> _adapter; // +0x28
}
- (id)tid;
- (void)setTid:(id)arg1;
- (id)originalId;
- (void)setOriginalId:(id)arg1;
- (id)originalItem;
- (void)setOriginalItem:(id)arg1;
- (id /* block */)onComplete;
- (void)setOnComplete:(id /* block */)arg1;
- (id)adapter;
- (void)setAdapter:(id)arg1;
- (void).cxx_destruct;
@end

