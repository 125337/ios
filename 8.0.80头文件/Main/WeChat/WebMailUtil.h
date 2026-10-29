@interface WebMailUtil : MMObject
+ (id)ConvertMailNodeList2NativeHTMLContent:(id)arg1 imageAttachmentList:(id)arg2;
+ (id)SystemConvertMailNodeList2HTMLContent:(id)arg1;
+ (id)MailcompressImage:(id)arg1;
+ (id)SystemConvertMailNode2HTMLContent:(id)arg1 withImgIndex:(int)arg2;
+ (id)ConvertMailNode2NativeHTMLContent:(id)arg1 imageIndex:(unsigned long long *)arg2 imageAttachmentList:(id)arg3;
+ (id)ConvertMailNode2HTMLContent:(id)arg1;
@end
