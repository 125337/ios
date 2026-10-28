@interface LiteAppEngineConfigModel : NSObject
{
    LiteAppEngineConfigStarTaskModel * _starTask; // +0x8
    LiteAppEngineConfigMinimizeTaskModel * _minimizeTask; // +0x10
}
- (id)init;
- (id)starTask;
- (void)setStarTask:(id)arg1;
- (id)minimizeTask;
- (void)setMinimizeTask:(id)arg1;
- (void).cxx_destruct;
@end
