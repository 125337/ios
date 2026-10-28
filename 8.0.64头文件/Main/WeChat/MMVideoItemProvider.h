@interface MMVideoItemProvider : NSObject <NSItemProviderWriting>
{
    NSString * _filePath; // +0x8
    CMessageWrap * _msgWrap; // +0x10
}
+ (id)writableTypeIdentifiersForItemProvider;
- (id)initWithFilePath:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)description;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (void).cxx_destruct;
@end
