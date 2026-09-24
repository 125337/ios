#import "KeywordAlertEngine.h"

@implementation KeywordAlertEngine

+ (NSArray<NSString *> *)parseKeywordList:(NSString *)text {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return @[];
    NSMutableArray *result = [NSMutableArray array];
    for (NSString *line in [text componentsSeparatedByCharactersInSet:[NSCharacterSet newlineCharacterSet]]) {
        NSString *trimmed = [line stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
        if (trimmed.length > 0) [result addObject:trimmed];
    }
    return [result copy];
}

+ (NSString *)regexPatternFromKeyword:(NSString *)keyword {
    NSString *kw = [keyword stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (kw.length < 3) return nil;

    unichar first = [kw characterAtIndex:0];
    unichar last = [kw characterAtIndex:kw.length - 1];
    // WCR: 0x2f '/' 成对 或 0xFF0F '／' 成对（不允许混用），取内部子串作正则
    BOOL halfPair = (first == 0x2f && last == 0x2f);
    BOOL fullPair = (first == 0xFF0F && last == 0xFF0F);
    if (halfPair || fullPair) {
        return [kw substringWithRange:NSMakeRange(1, kw.length - 2)];
    }
    return nil;
}

+ (NSArray<NSValue *> *)matchRangesInContent:(NSString *)content keyword:(NSString *)keyword {
    if (![content isKindOfClass:[NSString class]] || content.length == 0) return @[];

    // WCR: keyword 非 NSString 按 @"" 处理；trim 后为空则无命中
    NSString *kw = [keyword isKindOfClass:[NSString class]] ? keyword : @"";
    kw = [kw stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
    if (kw.length == 0) return @[];

    NSString *pattern = [self regexPatternFromKeyword:kw];
    if (pattern == nil && [kw containsString:@"\\"]) {
        // WCR: 含反斜杠的词条整体作正则
        pattern = kw;
    }

    if (pattern == nil) {
        // 字面匹配：双方 lowercase，收集全部命中
        NSString *lcContent = [content lowercaseString] ?: content;
        NSString *lcKeyword = [kw lowercaseString] ?: kw;
        NSMutableArray *ranges = [NSMutableArray array];
        NSUInteger searchFrom = 0;
        while (searchFrom < content.length) {
            NSRange remain = NSMakeRange(searchFrom, content.length - searchFrom);
            NSRange hit = [lcContent rangeOfString:lcKeyword options:0 range:remain];
            if (hit.location == NSNotFound) break;
            [ranges addObject:[NSValue valueWithRange:hit]];
            searchFrom = hit.location + hit.length;
            if (searchFrom >= content.length) break;
        }
        return [ranges copy];
    }

    if (pattern.length == 0) return @[];

    NSError *error = nil;
    // WCR: options=1（大小写不敏感），在原始内容上收集全部命中
    NSRegularExpression *regex = [NSRegularExpression regularExpressionWithPattern:pattern
                                                                           options:NSRegularExpressionCaseInsensitive
                                                                             error:&error];
    if (!regex) {
        return @[];
    }
    NSMutableArray *ranges = [NSMutableArray array];
    [regex enumerateMatchesInString:content
                            options:0
                              range:NSMakeRange(0, content.length)
                         usingBlock:^(NSTextCheckingResult *result, NSMatchingFlags flags, BOOL *stop) {
        NSRange r = result.range;
        if (r.location != NSNotFound && r.length > 0) {
            [ranges addObject:[NSValue valueWithRange:r]];
        }
    }];
    return [ranges copy];
}

+ (BOOL)matchesAnyKeyword:(NSArray<NSString *> *)keywords
                  inTexts:(NSArray<NSString *> *)texts
                  matched:(NSArray<NSString *> **_Nullable)outMatched {
    if (outMatched) *outMatched = nil;
    if (keywords.count == 0 || texts.count == 0) return NO;

    NSMutableSet *hits = [NSMutableSet set];
    for (NSString *kw in keywords) {
        if (![kw isKindOfClass:[NSString class]]) continue;
        for (NSString *text in texts) {
            if ([self matchRangesInContent:text keyword:kw].count > 0) {
                [hits addObject:kw];
                break;
            }
        }
    }
    if (hits.count == 0) return NO;
    if (outMatched) *outMatched = [hits allObjects];
    return YES;
}

+ (BOOL)isSuppressedByDisabledKeywords:(NSArray<NSString *> *)disabledKeywords
                              keywords:(NSArray<NSString *> *)keywords
                               inTexts:(NSArray<NSString *> *)texts {
    for (NSString *dk in disabledKeywords) {
        if (![dk isKindOfClass:[NSString class]]) continue;
        for (NSString *text in texts) {
            NSArray<NSValue *> *ranges = [self matchRangesInContent:text keyword:dk];
            if (ranges.count == 0) continue;

            // 删掉该禁用词的全部命中区间，看剩余内容是否仍命中关键词
            NSString *remaining = [self content:text byRemovingRanges:ranges];
            NSArray *stillMatched = nil;
            BOOL still = [self matchesAnyKeyword:keywords inTexts:@[remaining ?: @""] matched:&stillMatched];
            if (!still) {
                return YES; // 抑制
            }
            // 仍命中 → 豁免本禁用词，继续检查其余禁用词
        }
    }
    return NO;
}

+ (NSString *)content:(NSString *)content byRemovingRanges:(NSArray<NSValue *> *)ranges {
    NSMutableString *m = [content mutableCopy];
    // 从后往前删，避免区间失效
    NSArray<NSValue *> *sorted = [ranges sortedArrayUsingComparator:^NSComparisonResult(NSValue *a, NSValue *b) {
        return [b rangeValue].location > [a rangeValue].location ? NSOrderedDescending
             : [b rangeValue].location < [a rangeValue].location ? NSOrderedAscending : NSOrderedSame;
    }];
    for (NSValue *v in sorted) {
        NSRange r = v.rangeValue;
        if (NSMaxRange(r) <= m.length) {
            [m deleteCharactersInRange:r];
        }
    }
    return [m copy];
}

+ (NSArray<NSString *> *)extractQuotedTexts:(NSString *)xmlContent {
    if (![xmlContent isKindOfClass:[NSString class]] || xmlContent.length == 0) return @[];

    NSMutableArray *texts = [NSMutableArray array];
    NSString *title = [self xmlTagText:xmlContent tagName:@"title"];
    if (title.length > 0) [texts addObject:title];

    // <refermsg>…</refermsg> 内的 <content>…</content>
    NSRange refer = [xmlContent rangeOfString:@"<refermsg>"];
    if (refer.location != NSNotFound) {
        NSRange referEnd = [xmlContent rangeOfString:@"</refermsg>"];
        if (referEnd.location != NSNotFound && referEnd.location > refer.location) {
            NSRange scope = NSMakeRange(refer.location, referEnd.location - refer.location);
            NSString *referContent = [self xmlTagText:[xmlContent substringWithRange:scope] tagName:@"content"];
            if (referContent.length > 0) [texts addObject:referContent];
        }
    }
    return [texts copy];
}

+ (NSString *)xmlTagText:(NSString *)xml tagName:(NSString *)tagName {
    NSString *open = [NSString stringWithFormat:@"<%@>", tagName];
    NSString *close = [NSString stringWithFormat:@"</%@>", tagName];
    NSRange o = [xml rangeOfString:open];
    if (o.location == NSNotFound) return nil;
    NSRange scope = NSMakeRange(o.location + o.length, xml.length - o.location - o.length);
    if (scope.length <= 0) return nil;
    NSRange c = [xml rangeOfString:close options:0 range:scope];
    if (c.location == NSNotFound) return nil;
    NSString *inner = [xml substringWithRange:NSMakeRange(scope.location, c.location - scope.location)];

    // 剥离 CDATA 包裹
    if ([inner hasPrefix:@"<![CDATA["]) {
        NSRange end = [inner rangeOfString:@"]]>"];
        if (end.location != NSNotFound) {
            inner = [inner substringWithRange:NSMakeRange(9, end.location - 9)];
        }
    }
    return [self xmlUnescape:inner];
}

+ (NSString *)xmlUnescape:(NSString *)s {
    if (!s.length) return s;
    NSString *r = s;
    r = [r stringByReplacingOccurrencesOfString:@"&lt;" withString:@"<"];
    r = [r stringByReplacingOccurrencesOfString:@"&gt;" withString:@">"];
    r = [r stringByReplacingOccurrencesOfString:@"&quot;" withString:@"\""];
    r = [r stringByReplacingOccurrencesOfString:@"&apos;" withString:@"'"];
    r = [r stringByReplacingOccurrencesOfString:@"&amp;" withString:@"&"];
    return r;
}

@end
