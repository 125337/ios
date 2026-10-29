@interface MMDropDocumentItem : NSObject <NSItemProviderReading>
{
    NSData * _data; // +0x8
}
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 typeIdentifier:(id)arg2;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end

