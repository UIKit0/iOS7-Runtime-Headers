/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSArray;

@interface NSParagraphStyle : NSObject <NSCopying, NSMutableCopying, NSCoding> {
    float _lineSpacing;
    float _paragraphSpacing;
    float _headIndent;
    float _tailIndent;
    float _firstLineHeadIndent;
    float _minimumLineHeight;
    float _maximumLineHeight;
    NSArray *_tabStops;
    struct { 
        unsigned int alignment : 4; 
        unsigned int lineBreakMode : 4; 
        unsigned int tabStopsIsMutable : 1; 
        unsigned int isNaturalDirection : 1; 
        unsigned int rightToLeftDirection : 1; 
        unsigned int fixedMultiple : 2; 
        unsigned int refCount : 19; 
    } _flags;
    float _defaultTabInterval;
    id _extraData;
}

@property(readonly) float lineSpacing;
@property(readonly) float paragraphSpacing;
@property(readonly) int alignment;
@property(readonly) float headIndent;
@property(readonly) float tailIndent;
@property(readonly) float firstLineHeadIndent;
@property(readonly) float minimumLineHeight;
@property(readonly) float maximumLineHeight;
@property(readonly) int lineBreakMode;
@property(readonly) int baseWritingDirection;
@property(readonly) float lineHeightMultiple;
@property(readonly) float paragraphSpacingBefore;
@property(readonly) float hyphenationFactor;
@property(readonly) NSArray * tabStops;
@property(readonly) float defaultTabInterval;

+ (int)_defaultWritingDirection;
+ (id)defaultParagraphStyle;
+ (int)defaultWritingDirectionForLanguage:(id)arg1;
+ (void)initialize;

- (int)baseWritingDirection;
- (float)paragraphSpacingBefore;
- (float)paragraphSpacing;
- (float)lineSpacing;
- (float)minimumLineHeight;
- (float)maximumLineHeight;
- (float)lineHeightMultiple;
- (int)lineBreakMode;
- (float)defaultTabInterval;
- (id)tabStops;
- (float)tailIndent;
- (float)headIndent;
- (float)firstLineHeadIndent;
- (int)alignment;
- (BOOL)_isSuitableForFastStringDrawingWithAlignment:(int*)arg1 lineBreakMode:(int*)arg2 tighteningFactorForTruncation:(float*)arg3;
- (void)_deallocExtraData;
- (id)_initWithParagraphStyle:(id)arg1;
- (int)headerLevel;
- (void)_allocExtraData;
- (id)textLists;
- (float)tighteningFactorForTruncation;
- (float)hyphenationFactor;
- (id)textBlocks;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)_ui_resolvedTextAlignment;

@end
