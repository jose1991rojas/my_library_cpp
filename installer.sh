#!/bin/bash

# Configuración
HEADER_FILE="ruzza.h"
INSTALL_PATH="/usr/local/include"

echo "Instalando cabecera: $HEADER_FILE"

# Verificar existencia del archivo local
if [[ ! -f "$HEADER_FILE" ]]; then
    echo "Error: $HEADER_FILE no encontrado en el directorio actual."
    exit 1
fi

# Copia con privilegios y ajuste de permisos (lectura para todos, escritura solo root)
if sudo cp "$HEADER_FILE" "$INSTALL_PATH/"; then
    sudo chmod 644 "$INSTALL_PATH/$HEADER_FILE"
    echo "Instalación exitosa en $INSTALL_PATH/$HEADER_FILE"
else
    echo "Error al copiar el archivo. Verifique permisos de sudo."
    exit 1
fi
