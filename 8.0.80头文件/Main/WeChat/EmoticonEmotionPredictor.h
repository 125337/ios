@interface EmoticonEmotionPredictor : NSObject <ModelResourceExt>
{
    unique_ptr<EmotionPredictor, std::default_delete<EmotionPredictor>> predictor; // +0x8
    BOOL _hasPrepare; // +0x10
    BOOL _ready; // +0x11
    id <EmoticonRecommendDelegate> _delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (id)runPredict:(id)arg1;
- (BOOL)preparePredictor;
- (BOOL)isReady;
- (void)prepareModel;
- (id)makeTokenizer:(id)arg1;
- (id)modelPath;
- (id)tokenPath;
- (id)idLabelPath;
- (void)readIdLabel;
- (BOOL)hasModel;
- (BOOL)hasTokenizer;
- (id)modelUnZipDir;
- (BOOL)checkNewModelZipRes;
- (BOOL)checkHasNewRes:(id)arg1;
- (void)onResourceLoaded:(id)arg1;
- (void)loadResourceCompleted:(id)arg1;
- (void)onResourceUpdate;
- (void)updateModel;
- (void)updateTokenizer;
- (id)loadModelZipRes;
- (BOOL)isModelResource:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)hasPrepare;
- (void)setHasPrepare:(BOOL)arg1;
- (BOOL)ready;
- (void)setReady:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
