@interface MMCDNFileItemProvider : MMBaseItemProvider
{
    NSString * _url; // +0x8
}
+ (id)writableTypeIdentifiersForItemProvider;
- (id)initWithMsgWrap:(id)arg1;
- (id)writableTypeIdentifiersForItemProvider;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)description;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end
