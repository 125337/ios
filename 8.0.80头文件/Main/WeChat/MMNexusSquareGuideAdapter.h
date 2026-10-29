@interface MMNexusSquareGuideAdapter : NSObject
{
    id /* block */ _recommendProvider; // +0x8
    id /* block */ _onClickLive; // +0x10
    id /* block */ _onClickGoSquare; // +0x18
    id /* block */ _onClickStopShow; // +0x20
    id /* block */ _onClickLeave; // +0x28
}
+ (void)registerPageIfNeeded;
+ (BOOL)isNexusEnabled;
- (BOOL)showFromNav:(id)arg1 taskId:(id)arg2 entranceMode:(BOOL)arg3;
- (id /* block */)recommendProvider;
- (void)setRecommendProvider:(id /* block */)arg1;
- (id /* block */)onClickLive;
- (void)setOnClickLive:(id /* block */)arg1;
- (id /* block */)onClickGoSquare;
- (void)setOnClickGoSquare:(id /* block */)arg1;
- (id /* block */)onClickStopShow;
- (void)setOnClickStopShow:(id /* block */)arg1;
- (id /* block */)onClickLeave;
- (void)setOnClickLeave:(id /* block */)arg1;
- (void).cxx_destruct;
@end
