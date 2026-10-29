@interface MagicWeAppCardFrameItem : NSObject
{
    unsigned int _bizType; // +0x8
    unsigned int _frameId; // +0xc
    MagicSclFrameSetView * _frameSetView; // +0x10
    id /* block */ _insertCompletion; // +0x18
}
- (unsigned int)bizType;
- (void)setBizType:(unsigned int)arg1;
- (unsigned int)frameId;
- (void)setFrameId:(unsigned int)arg1;
- (id)frameSetView;
- (void)setFrameSetView:(id)arg1;
- (id /* block */)insertCompletion;
- (void)setInsertCompletion:(id /* block */)arg1;
- (void).cxx_destruct;
@end
