#pragma once

enum TipodeUsuarioEnum {
	Ninguno, Cliente, Cajero
};

struct Usuario {
	wchar_t NombreCompleto[51];
	wchar_t NombreUsuario[21];
	wchar_t AliasUsuario[11];
	wchar_t Contrasena[11];
	TipodeUsuarioEnum TipodeUsuario;
	int SucursalID;
	wchar_t FotoDir[256];
};