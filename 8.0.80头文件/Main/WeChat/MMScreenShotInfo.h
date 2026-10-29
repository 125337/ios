@interface MMScreenShotInfo : NSObject
{
    BOOL _showSnsShareItem; // +0x8
    BOOL _showBizShareItem; // +0x9
    BOOL _showGameCircleShareItem; // +0xa
    BOOL _replaceEditWithCropItemInProcess; // +0xb
    unsigned int _scene; // +0xc
    NSString * _processTitle; // +0x10
    id /* block */ _processHandler; // +0x18
    id /* block */ _onWillForwardMsg; // +0x20
    id /* block */ _onDidForwardMsg; // +0x28
    id /* block */ _onWillSearch; // +0x30
    NSDictionary * _gameCenterExtraData; // +0x38
}
- (void)setupWithProcessTitle:(id)arg1 processHandler:(id /* block */)arg2;
- (id)description;
- (unsigned int)scene;
- (void)setScene:(unsigned int)arg1;
- (BOOL)showSnsShareItem;
- (void)setShowSnsShareItem:(BOOL)arg1;
- (BOOL)showBizShareItem;
- (void)setShowBizShareItem:(BOOL)arg1;
- (BOOL)showGameCircleShareItem;
- (void)setShowGameCircleShareItem:(BOOL)arg1;
- (BOOL)replaceEditWithCropItemInProcess;
- (void)setReplaceEditWithCropItemInProcess:(BOOL)arg1;
- (id)processTitle;
- (id /* block */)processHandler;
- (id /* block */)onWillForwardMsg;
- (void)setOnWillForwardMsg:(id /* block */)arg1;
- (id /* block */)onDidForwardMsg;
- (void)setOnDidForwardMsg:(id /* block */)arg1;
- (id /* block */)onWillSearch;
- (void)setOnWillSearch:(id /* block */)arg1;
- (id)gameCenterExtraData;
- (void)setGameCenterExtraData:(id)arg1;
- (void).cxx_destruct;
@end
