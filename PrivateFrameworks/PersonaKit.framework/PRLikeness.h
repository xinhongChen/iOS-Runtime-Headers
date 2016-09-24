/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit
 */

@interface PRLikeness : NSObject <NSSecureCoding> {
    NSDate * _creationDate;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cropRectForTopLeftOrigin;
    NSMutableSet * _dirtyProperties;
    NSDate * _expirationDate;
    NSString * _externalIdentifier;
    NSDate * _insertionDate;
    BOOL  _isCurrent;
    NSString * _ownerID;
    NSData * _recipe;
    unsigned int  _scope;
    NSDate * _softExpirationDate;
    int  _source;
    struct CGImage { } * _staticRepresentation;
    NSData * _staticRepresentationData;
    unsigned int  _type;
    NSString * _uniqueIdentifier;
    unsigned int  _version;
}

@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRectForBottomLeftOrigin;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cropRectForTopLeftOrigin;
@property (nonatomic, retain) NSSet *dirtyProperties;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, copy) NSString *externalIdentifier;
@property (nonatomic, retain) NSDate *insertionDate;
@property (setter=setCurrent:, nonatomic) BOOL isCurrent;
@property (nonatomic, readonly) BOOL isDirty;
@property (nonatomic, retain) NSString *ownerID;
@property (nonatomic, copy) NSData *recipe;
@property (nonatomic) unsigned int scope;
@property (nonatomic, readonly) NSString *scopeDescription;
@property (nonatomic, retain) NSDate *softExpirationDate;
@property (nonatomic) int source;
@property (nonatomic, retain) NSData *staticRepresentationData;
@property (nonatomic) unsigned int type;
@property (nonatomic, readonly) NSString *typeDescription;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic) unsigned int version;

// Image: /System/Library/PrivateFrameworks/PersonaKit.framework/PersonaKit

+ (id)_dateFormatter;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_flippedRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 relativeToImage:(struct CGImage { }*)arg2;
+ (id)_photoWithScope:(unsigned int)arg1 image:(struct CGImage { }*)arg2 cropRectForTopLeftOrigin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (BOOL)automaticallyNotifiesObserversOfCropRectForTopLeftOrigin;
+ (id)descriptionForScope:(unsigned int)arg1;
+ (id)diddlySquatLikeness;
+ (id)likenessWithPropagatedData:(id)arg1;
+ (id)monogramWithRecipe:(id)arg1 staticRepresentation:(struct CGImage { }*)arg2;
+ (id)monogramWithScope:(unsigned int)arg1 recipe:(id)arg2 staticRepresentation:(struct CGImage { }*)arg3;
+ (id)photoWithImage:(struct CGImage { }*)arg1;
+ (id)photoWithImage:(struct CGImage { }*)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)photoWithImage:(struct CGImage { }*)arg1 cropRectForBottomLeftOrigin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)photoWithImage:(struct CGImage { }*)arg1 cropRectForTopLeftOrigin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)photoWithScope:(unsigned int)arg1 image:(struct CGImage { }*)arg2;
+ (unsigned int)scopeFromDescription:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1;
- (void)clearDirtyProperties;
- (id)creationDate;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectForBottomLeftOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectForTopLeftOrigin;
- (id)dataForPropagation;
- (void)dealloc;
- (id)description;
- (id)dirtyProperties;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)externalIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)insertionDate;
- (BOOL)isCurrent;
- (BOOL)isDiddlySquat;
- (BOOL)isDirty;
- (id)ownerID;
- (id)recipe;
- (unsigned int)scope;
- (id)scopeDescription;
- (void)setCreationDate:(id)arg1;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCropRectForTopLeftOrigin:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrent:(BOOL)arg1;
- (void)setDirtyProperties:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setExternalIdentifier:(id)arg1;
- (void)setInsertionDate:(id)arg1;
- (void)setOwnerID:(id)arg1;
- (void)setRecipe:(id)arg1;
- (void)setScope:(unsigned int)arg1;
- (void)setSoftExpirationDate:(id)arg1;
- (void)setSource:(int)arg1;
- (void)setStaticRepresentation:(struct CGImage { }*)arg1;
- (void)setStaticRepresentationData:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)softExpirationDate;
- (int)source;
- (struct CGImage { }*)staticRepresentation;
- (id)staticRepresentationData;
- (unsigned int)type;
- (id)typeDescription;
- (id)uniqueIdentifier;
- (unsigned int)version;

// Image: /System/Library/PrivateFrameworks/PersonaUI.framework/PersonaUI

- (id)_accentColorForMonogram;
- (id)_accentColorForPhoto;
- (id)_photoSnapshotWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(float)arg2 options:(id)arg3;
- (id)accentColor;
- (id)snapshotWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(float)arg2 options:(id)arg3;

@end