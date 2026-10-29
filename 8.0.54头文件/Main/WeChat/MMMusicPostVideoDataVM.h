@interface MMMusicPostVideoDataVM : NSObject <MMMusicLiveCGIMgrDelegate, MMMusicDataVM>
{
    NSMutableArray * _arrData; // +0x8
    MMMusicLiveCGIMgr * _cgiMgr; // +0x10
    MMMusicMVModel * _mvModel; // +0x18
    id <MMMusicPostVideoDataVMDelegate> _delegate; // +0x20
    MMMusicInfo * _musicInfo; // +0x28
}
- (id)initWithMVModel:(id)arg1;
- (void)loadNextPageData;
- (void)onServerGetDataArr:(id)arg1 continueFlag:(BOOL)arg2;
- (long long)numberOfItemsInSection;
- (id)dataOfIndex:(long long)arg1;
- (unsigned long long)indexOfData:(id)arg1;
- (id)getDataById:(id)arg1;
- (void)notifyOnDataChanged:(BOOL)arg1;
- (void)onMusicLiveGetMVRecommentList:(id)arg1 continueFlag:(BOOL)arg2 requestId:(id)arg3;
- (id)dataArray;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (void).cxx_destruct;
@end

