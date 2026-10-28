@interface MMFileItemProvider : NSObject <NSItemProviderWriting>
{
    NSString * _fileName; // +0x8
    NSString * _filePath; // +0x10
    CMessageWrap * _msgWrap; // +0x18
    UTType * _type; // +0x20
}
+ (id)writableTypeIdentifiersForItemProvider;
- (id)initWithFileName:(id)arg1 filePath:(id)arg2;
- (id)writableTypeIdentifiersForItemProvider;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (id)description;
- (id)fileName;
- (void)setFileName:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)type;
- (void)setType:(id)arg1;
- (void).cxx_destruct;
@end
