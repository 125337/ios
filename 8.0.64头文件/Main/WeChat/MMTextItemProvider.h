@interface MMTextItemProvider : NSObject <NSItemProviderWriting>
{
    NSString * _content; // +0x8
}
+ (id)writableTypeIdentifiersForItemProvider;
- (id)initWithContent:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)description;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end
