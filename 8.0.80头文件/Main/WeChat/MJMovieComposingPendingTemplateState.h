@interface MJMovieComposingPendingTemplateState : NSObject
{
    BOOL _shouldAffectExitResult; // +0x8
    BOOL _loadFinished; // +0x9
    MMCameraTemplateItem * _templateItem; // +0x10
    id /* block */ _completion; // +0x18
    NSString * _requestID; // +0x20
    NSError * _loadError; // +0x28
}
- (id)initWithTemplateItem:(id)arg1 shouldAffectExitResult:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)description;
- (id)templateItem;
- (BOOL)shouldAffectExitResult;
- (id /* block */)completion;
- (id)requestID;
- (BOOL)loadFinished;
- (void)setLoadFinished:(BOOL)arg1;
- (id)loadError;
- (void)setLoadError:(id)arg1;
- (void).cxx_destruct;
@end
