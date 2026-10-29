@interface MMFinderLiveStickerEditingViewControllerConfiguration : NSObject <NSCopying>
{
    BOOL _forceReplacingContent; // +0x8
    BOOL _forceResetTransformation; // +0x9
    unsigned long long _operationMode; // +0x10
    OMJLowerThirdImageGenerator * _lowerThirdGenerator; // +0x18
    MMFinderLiveStickerTextTemplateResourceRepository * _textTemplateResources; // +0x20
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)forceReplacingContent;
- (void)setForceReplacingContent:(BOOL)arg1;
- (BOOL)forceResetTransformation;
- (void)setForceResetTransformation:(BOOL)arg1;
- (unsigned long long)operationMode;
- (void)setOperationMode:(unsigned long long)arg1;
- (id)lowerThirdGenerator;
- (void)setLowerThirdGenerator:(id)arg1;
- (id)textTemplateResources;
- (void)setTextTemplateResources:(id)arg1;
- (void).cxx_destruct;
@end

