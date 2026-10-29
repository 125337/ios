@interface TXYHyPrivateVM : TXYHyBaseVM
{
    PrivateGetConfigResult * _getConfigResult; // +0x8
}
- (void)dealloc;
- (void)setLiveData:(id)arg1 extraInfo:(id)arg2 riskResult:(id)arg3;
- (void)viewDidLoad;
- (void)stagePrepare:(id)arg1;
- (void)stageCheckModule:(id)arg1;
- (void)stageStartAuthAction:(id)arg1;
- (void)stageGetLiveData:(id)arg1;
- (BOOL)startInitFailBlock:(long long)arg1 errorMsg:(id)arg2;
- (BOOL)resultSuccBlock:(id)arg1 extraInfo:(id)arg2 videoPath:(id)arg3;
- (BOOL)resultFailBlock:(long long)arg1 errorMsg:(id)arg2;
- (id)getConfigResult;
- (void)setGetConfigResult:(id)arg1;
- (void).cxx_destruct;
@end
