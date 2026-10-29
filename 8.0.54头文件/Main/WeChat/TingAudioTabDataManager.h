@interface TingAudioTabDataManager : MMObject <TingFlowPlayerNotification>
{
    BOOL _hasShowAudioTab; // +0x8
    MemoryMappedKV * _mmkv; // +0x10
}
- (id)init;
- (id)mmkv;
- (BOOL)hasShownListenLaterEducation;
- (void)setHasShownListenLaterEducation:(BOOL)arg1;
- (BOOL)shouldShowAudioTabReDot;
- (void)setShouldShowAudioTabReDot:(BOOL)arg1;
- (void)addToListenLaterWithItem:(id)arg1 inCategory:(id)arg2 scene:(int)arg3 completion:(id /* block */)arg4;
- (void)addToListenLaterWithItem:(id)arg1 inCategory:(id)arg2 scene:(int)arg3 curPlayPos:(double)arg4 fillContextBlock:(id /* block */)arg5 completion:(id /* block */)arg6;
- (void)deleteFromListenLater:(id)arg1 scene:(int)arg2 completion:(id /* block */)arg3;
- (void)jumpToAudioTabAndTopWithScene:(int)arg1;
- (BOOL)hasShowAudioTab;
- (void)setHasShowAudioTab:(BOOL)arg1;
- (void)setMmkv:(id)arg1;
- (void).cxx_destruct;
@end

