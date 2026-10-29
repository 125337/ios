@interface MagicFlutterTextureResult : NSObject
{
    long long _textureId; // +0x8
    id /* block */ _consumer; // +0x10
}
- (id)initWithTextureId:(long long)arg1 consumer:(id /* block */)arg2;
- (long long)textureId;
- (id /* block */)consumer;
- (void).cxx_destruct;
@end
