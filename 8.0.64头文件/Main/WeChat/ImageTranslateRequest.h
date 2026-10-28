@interface ImageTranslateRequest : NSObject
{
    OCRTransReport * _statInfo; // +0x8
    UIImage * _image; // +0x10
    OCRTransResultViewController * _transResultViewController; // +0x18
    id /* block */ _callBack; // +0x20
    id /* block */ _finishBlock; // +0x28
}
- (void)execute;
- (void)onHandleTranslateFinish:(id)arg1 cgiWrap:(id)arg2 context:(id)arg3 statInfo:(id)arg4;
- (void)onHandleRequestFinish:(long long)arg1 image:(id)arg2 statInfo:(id)arg3;
- (id)statInfo;
- (void)setStatInfo:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)transResultViewController;
- (void)setTransResultViewController:(id)arg1;
- (id /* block */)callBack;
- (void)setCallBack:(id /* block */)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
